#include <stdio.h>

int current_price

int RANK_SELL = 18;

int RANK_BUY = 10;

int TIME_PICK;

int case;

int time_rn;

float balance;//<-----传回数据

float pnl;//<-----传回数据

float total;

//每次历史的交易单
//given by contest provider
struct history{
    float price;
    int volumn;
}

//from t = 0.....30
//其他人产生的历史交易数据
struct token_info{
    struct history ask[10];//-----n-1
    struct history bid[10];// 0-9
    int average_ask;
    int average_bid;
    float hist_price; //lastest price
    int hist_volume; //lastest volumn
}



//我们自身成交的所有交易
struct hist_trade{//-----n-1
    struct history historyarray[30][20];//column: 0...29sec, row: 0...19 our requesred trade
    int trade_count[30];
    float average_cost; //use Dr. Tian suggest 的 equation
    int total_volume; 
}

// 给每个股票一个瞬时信息-----n
// at time t=n, instant rank info, for array t=0...30

struct stock{
    int token; //name of the stock
    int state;  //whether in stock
    int rank; //rank in 29 stocks
    int volumn; //volumn in stock
    float current_price; //stock[token_num].rank
    int eval;
    struct hist_trade hist;
    struct token_info token_info[30];

}

//------------------------计算函数------------------------
//加权平均计算
int fwa(struct history array[],int num){
    int average_price=0,total_volume=0;
    for (int i=0;i<num;i++){
        average_price+=array[i].price*array[i].volume;
        total_volume+=array[i].volume;
    }
    average_price/=total_volume;
    return average_price;
}

// time n
//评价系数1——>可用于第一秒和其余时间的进一步计算(price*volumn)/total_volumn
void eval_current(int token_num){
    bool if_big;
    int sum_ask =0;
    int volumn_total_ask;
    int sum_bid =0;
    int volumn_total_bid;
    stock[token_num].eval
    //sum ask
    stock[token_num].token_info[time_rn].average_ask = fwa(stock[token_num].token_info[time_rn].ask,10); //<----average ask
    //sum bid
    stock[token_num].token_info[time_rn].average_bid = fwa(stock[token_num].token_info[time_rn].bid,10);//<------average bid
}//will the data from yesterday matters to our calculation?????????????????
//------>return average_ask and average_bid 

//评价系数2增长率用于第2秒及之后判断排行
int eval_growth(int token_num){
    int time_consid = 5:
    float weight[time_consid]={0.08,0.12,0.15,0.25,0.4};//<-----------------for future change
    int growth=0;
    int counter = 0;

    //if time >5
    for (int i=time_rn;i>time_rn-time_consid;i--){

        growth+=(stock[token_num].token_info[time_rn].average_ask-stock[token_num].token_info[time_r-1].average_ask)*weight[counter]/stock[token_num].token_info[time_rn].average_ask;
        growth+=(stock[token_num].token_info[time_rn].average_bid-stock[token_num].token_info[time_r-1].average_bid)*weight[counter]/stock[token_num].token_info[time_rn].average_bid;
        counter++;
    }
    stock[token_num].eval = growth;

    return growth;
}//---------->return growth

//排行
void rank_sort(){
    if (time==1){

    }
    //sort stock.eval into stock.rank--->update rank
    else{

    }
}


//定价
int what_price(int token_num,int bidorask){
    float price=0;
    float factor_bid=1.12;
    float factor_ask=0.98;//系数可修改
    if (bidorask==1){
        price=stock[token_num].token_info[time_rn].average_bid*factor_bid;
    }
    else if(bidorask==-1){
        price=stock[token_num].token_info[time_rn].average_bid*factor_bid;
    }
    return price;
}

//定量
int what_volume(int token_num,nt price ,int bidorask){


}

int buy(int stock){
    float price=what_price(stock,1);
    int volume=what_volume(stock,1);
}

int sell(int stock){
    float price=what_price(stock,2);
    int volume=what_volume(stock,2);
}
//------------------------分时购买策略------------------------

//第1秒
void case_1(){
    struct stock case1_stock[29];

    //sort eval
    //定价
    for(int i=1;i<=RANK_BUY;i++){
        //token to rank
        stock[token_num].state=1;//1 is buy
        stock[token_num].volume=what_volume(i);
        stock[token_num].current_price=what_price(i);
        stock[token_num].token =  //<------get token name function
        
    }
    // buy ten times
    //实现买入操作
    
    for (int i=0;i<10;i++){
        //具体交易,细节就是，把十个最高的股票买入，然后由许总进行trade()然后实际交易成功的计入hist，具体呈现在后面
        if (flag>0){//如果交易成功---->看传回的参数
            for (int j=0;j<stoke[i].hist.trade_count[0];j++){
                stoke[i].hist.historyarray[0][j].price=//-----> 传回的数据
                stoke[i].hist.historyarray[0][j].volume=//-----> 传回的数据
            }
        }
    }
}

//hist_volumn += volumn


//第2～5s
bool buy_or_sell_2(int *rank){

    for(int i=1;i<=RANK_BUY;i++){
        //token to rank
        rank[i].state=1;//1 is buy
        rank[i].volume=what_volume(i);
        rank[i].price=what_price(i);
    }

}


//第6～19s
bool buy_or_sell_3(int case, int rank){

}


//第20~24s
bool buy_or_sell_4(int case, int rank){
    //when to sell
    if (rank>=rank_sell_limit){
        sell();
    


}


int main(){






}