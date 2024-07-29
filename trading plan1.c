#include <stdio.h>

int current_price

int RANK_SELL = 18;

int RANK_BUY = 10;

int TIME_PICK;

int case;

int time_rn;

//每次历史的交易单
//given by contest provider
struct history{
    float price;
    int volumn;

}

//
//from stock_num = 1...29
// struct token(){//------
//     struct token_info token_num[];
//     struct rank;
// }

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


// time n
//(price*volumn)/total_volumn
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


//
void rank_sort(){
    //sort stock.eval into stock.rank--->update rank

}

int what_volume(int token_num,nt price ,int bidorask){


}
int what_price(int token_num,int bidorask){
    int price=0;int factor_bid=1.12;int factor_ask=0.98;//系数可修改
    if (bidorask==1){
        price=stock[token_num].token_info[time_rn].average_bid*factor_bid;
    }
    else if(bidorask==-1){
        price=stock[token_num].token_info[time_rn].average_bid*factor_bid;
    }
    return price;
}



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


// 先eval，再sort rank --->rank, eval

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
    for (int i=0;i<10;i++){
        //具体交易,细节就是，把十个最高的股票买入，然后由许总进行trade()然后实际交易成功的计入hist，具体呈现在后面
        if (flag>0){//如果交易成功---->看传回的参数
            for (int j=0;j<stoke[i].hist.trade_count[0];j++){
                stock[i].hist.historyarray[0][j].price=//-----> 传回的数据
                stock[i].hist.historyarray[0][j].volume=//-----> 传回的数据
            }
        }
    }


    for (){

    stock[token_num].hist




    }
    
}





//hist_volumn += volumn







//
bool buy_or_sell_2(int *rank){

    for(int i=1;i<=RANK_BUY;i++){
        //token to rank
        rank[i].state=1;//1 is buy
        rank[i].volume=what_volume(i);
        rank[i].price=what_price(i);
    }



}



bool buy_or_sell_3(int case, int rank){

}



bool buy_or_sell_4(int case, int rank){
    //when to sell
    if (rank>=rank_sell_limit){
        trade_sell();
    }


}

  



int value(){




}

//similar us as sort function
int rank(){



}

int position_limit=0.2;
int what_volume(int stocknum,int current_price){
	int total_asset=;//传回总资产
	int volume;
	int position=stock[stocknum].hist.average_cost*stock[stocknum].hist.total_volume;
	if (position+current_price*1000<=position_limit*total_asset){
		volume=1000;
	}
	else{
		volume=(position_limit*total_asset-position)/position;
	}
}
void buy_stra2(int stocknum){
	int mini1=0,mini2=0;
	if (stock[stocknum].eval>0){
		for (int i=0;;i+=6){
			if (stock[stocknum].token_info[time_rn-i].hist_price>stock[stocknum].token_info[time_rn-i-6].hist_price &&stock[stocknum].token_info[time_rn-i-12].hist_price>stock[stocknum].token_info[time_rn-i-6].hist_price){
				mini1=time_rn-6-i;
				for(int j=i+6;;j+=6){
					if (stock[stocknum].token_info[time_rn-j].hist_price>stock[stocknum].token_info[time_rn-j-6].hist_price &&stock[stocknum].token_info[time_rn-j-12].hist_price>stock[stocknum].token_info[time_rn-j-6].hist_price){
						mini2=time_rn-6-j;
						break;
					}
				}
				break;
			}
		}
		if (stock[stocknum].token_info[mini1].hist_price >=stock[stocknum].token_info[mini2].hist_price){
			stock[stocknum].state=1;//1 is buy
			stock[stocknum].volume=what_volume(stocknum);
			stock[stocknum].current_price=what_price(stocknum);
			stock[stocknum].token =  ;//<------get token name function
			int flag=0 ;//
			if (flag>0){//如果交易成功---->看传回的参数
				for (int j=0;j<stoke[i].hist.trade_count[0];j++){
					stock[stocknum].hist.historyarray[0][j].price= ;//-----> 传回的数据
					stock[stocknum].hist.historyarray[0][j].volume= ;//-----> 传回的数据
				}
			}
		}
	}
}
void sell_stra2(int stocknum){
	int maxi=0;
	for(int j=0;;j+=6){
		if (stock[stocknum].token_info[time_rn-j].hist_price<stock[stocknum].token_info[time_rn-j-6].hist_price &&stock[stocknum].token_info[time_rn-j-12].hist_price<stock[stocknum].token_info[time_rn-j-6].hist_price){
			maxi=time_rn-6-j;
			break;
		}
	}
	float profit_max=stock[stocknum].token_info[maxi].hist_price-stock[stocknum].hist.average_cost;
	float profit=stock[stocknum].token_info[time_rn].hist_price-stock[stocknum].hist.average_cost;
	int current_volume=stock[stocknum].hist.total_volume;
	if (stock[stocknum].eval<0){
		if (profit<=profit_max*2/3){
			stock[stocknum].state=-1;//-1 is sell
			stock[stocknum].volume=current_volume*0.5;//可修改
			stock[stocknum].current_price=what_price(stocknum);
			stock[stocknum].token =  ;//<------get token name function
			int flag=0 ;//
			if (flag>0){//如果交易成功---->看传回的参数
				for (int j=0;j<stoke[i].hist.trade_count[0];j++){
					stock[stocknum].hist.historyarray[0][j].price= ;//-----> 传回的数据
					stock[stocknum].hist.historyarray[0][j].volume= ;//-----> 传回的数据
				}
			}
		}
		else if(profit<=profit_max*1/3){
			stock[stocknum].state=-1;//-1 is sell
			stock[stocknum].volume=current_volume*0.3;//可修改
			stock[stocknum].current_price=what_price(stocknum);
			stock[stocknum].token =  ;//<------get token name function
			int flag=0 ;//
			if (flag>0){//如果交易成功---->看传回的参数
				for (int j=0;j<stoke[i].hist.trade_count[0];j++){
					stock[stocknum].hist.historyarray[0][j].price= ;//-----> 传回的数据
					stock[stocknum].hist.historyarray[0][j].volume= ;//-----> 传回的数据
				}
			}
		}
		else if(profit<=profit_max*1/8){
			stock[stocknum].state=-1;//-1 is sell
			stock[stocknum].volume=current_volume*0.2;//可修改
			stock[stocknum].current_price=what_price(stocknum);
			stock[stocknum].token =  ;//<------get token name function
			int flag=0 ;//
			if (flag>0){//如果交易成功---->看传回的参数
				for (int j=0;j<stoke[i].hist.trade_count[0];j++){
					stock[stocknum].hist.historyarray[0][j].price= ;//-----> 传回的数据
					stock[stocknum].hist.historyarray[0][j].volume= ;//-----> 传回的数据
				}
			}
		}
	}
}
//strategy2 可以在除了第一秒内的所有时间段使用

int main(){






}
