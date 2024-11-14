/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    let wealth=0;
    let richWealth = 0;
    
    for (i =0 ;i <accounts.length ;i++){
        let wealth =0;
        for(j =0 ;j<accounts[i].length ;j++){
            wealth += accounts[i][j];
             } 
         if (richWealth < wealth){
                richWealth=wealth;
            }
    } 
return richWealth;
};