class Solution {
public:
    string defangIPaddr(string address) {
        string defanged;
//         for(int i=0;i<address.size();i++){
//             if(address[i]=='.')
//             {
//             defanged+="[.]";
//             }   
//             else{
//                 defanged +=address[i];
//             }

//         }
//         return defanged;
//     }
// };
defanged.reserve(address.size()+6);
for(char c: address){
    if(c=='.'){
            defanged+="[.]";
    }
    else{
        defanged+=c;
    }
}
return defanged;
    }
};