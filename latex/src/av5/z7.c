int main() { 
   int broj, max; 
   if (scanf("%d", &max)) { 
        while(scanf("%d", &broj)) { 
            if (broj > 100) continue; 
            if(max < broj){ 
                max = broj; 
            } 
        } 
        printf("Maksimalniot broj e %d", max); 
    } else { 
        printf("Treba da vnesete najmalku eden cel broj"); 
    } 
    return 0; 
}

