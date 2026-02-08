class Solution {
public:
    struct Transaction {
            string name;
            int time;
            int amount;
            string city;
            string original;
            int id;
        };
    vector<string> invalidTransactions(vector<string>& transactions) {
        int n=transactions.size();
         set<int> InvalidIndices;
        unordered_map<string, vector<Transaction>> groups;
        for(int i=0; i<n; ++i) {
            stringstream ss(transactions[i]);
            string name, time_str, amount_str, city;

            getline(ss, name, ',');
            getline(ss, time_str, ',');
            getline(ss, amount_str, ',');
            getline(ss, city, ',');
            int time = stoi(time_str);
            int amount = stoi(amount_str);

            if(amount>1000) {
                InvalidIndices.insert(i);
            }
            groups[name].push_back({name, time,amount, city, transactions[i], i});
        }
       

        for(auto& entry: groups) {
            auto& userTxns = entry.second;

            sort(userTxns.begin(), userTxns.end(), [](const Transaction& a,const Transaction& b ) {
                return a.time< b.time;
            });
            for(int i=0;i< userTxns.size(); ++i){
                for(int j=i+1; j<userTxns.size(); ++j){
                    if(userTxns[j].time-userTxns[i].time>60) break;

                    if(userTxns[i].city != userTxns[j].city){
                        InvalidIndices.insert(userTxns[i].id);
                    InvalidIndices.insert(userTxns[j].id);
                    }
                }
            }
        }
        
    vector<string> result;
    for (int idx : InvalidIndices) {
        result.push_back(transactions[idx]);
    }

    return result;
    }
};