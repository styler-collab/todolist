class Task {
  private:
    //0-100 priority
    int priority;
    string date;
    
   public:
    Task(int pr){
      priority = pr;
    };
    Task(int pr, string date1){
      priority = pr;
      date = date1;
    }
};

int main(){
  Task test = new Task(100, "01/01/2020");
  printf("\n%d\n%s\n, test.priority, test.date);
  
  return 0;
}
