public class Solution {
    public List spiralOrder(int[][] a) {
    	List list = new ArrayList();
    	if(a.length == 0 || a[0].length == 0){
    		return list;
    	}
        int i = 0;//行
        int j = 0;//列
        boolean[][] b = new boolean[a.length][a[0].length];

        int o = 0;//表示方向，0：右；1：下；2：左；3：上
        
        //在范围内循环，超出范围结束
        while(i < a.length && i >= 0 && j < a[0].length && j >= 0){
            if(b[i][j]){//如果已全部走完,结束循环
                break;
            }
            
            list.add(a[i][j]); //添加结果
            b[i][j] = true;//已添加的标记为true，表示已经添加
            
            switch(o){
                case 0://往右走的方向
                    if(j == a[0].length - 1 || b[i][j+1]){
                        o = 1;//走到最右或者已标记，方向往下走
                        i++;
                    }else{
                        j++;
                    }
                    break;
                    
                case 1:
                    if(i == a.length - 1 || b[i+1][j]){
                        o = 2;//走到最下或者已标记，方向往左走
                        j--;
                    }else{
                        i++;
                    }
                    break;
                case 2:
                    if(j == 0 || b[i][j-1]){
                        o = 3;//走到最左或者已标记，方向往上走
                        i--;
                    }else{
                        j--;
                    }
                    break;
                case 3:
                    if(i == 0 || b[i-1][j]){
                        o = 0;//走到最上或者已标记，方向往右走
                        j++;
                    }else{
                        i--;
                    }
                    break;
            }
        }
        return list;
    }
}

