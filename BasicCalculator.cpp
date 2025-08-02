#include<iostream>
#include <cmath>

class Calculator
{
      private:
            char ops;
            int numf,nums;//Stores the operands
            char cont;
      public:
            Calculator():cont('Y'){}

            void run()
            {
                  while(cont == 'Y' || cont == 'y')
                  {
                        askInput();

                        processCalculation();

                        askToContinue();

                  }
                  std::cout<<"Calculator CLOSED.Thanks for using:)"<<std::endl;
            }
      private:
            void askInput()
            {
                  std::cout << "Enter an operator (+, -, *, /, %, ^): ";
                  std::cin>>ops;

                  std::cout<<"Enter the operands:";
                  std::cin >> numf >> nums;
            }
            void processCalculation()
            {
                  switch(ops)
                  {
                        case '+':
                              std::cout<<numf << " + " << nums << " = "<< (numf + nums) <<std::endl;
                              break;
                        case '-':
                              std::cout<<numf << " - " << nums << " = "<< (numf - nums) <<std::endl;
                              break;
                        case '*':
                              std::cout<<numf << " * " << nums << " = "<< (numf * nums) <<std::endl;
                              break;
                        case '/':
                              if( nums != 0)
                                    std::cout<<numf << " / " << nums << " = " << (numf / nums) <<std::endl;
                              else
                                    std::cout<<"ERROR:Divivsion by zero not possible"<<std::endl;
                              break;
                        case '%':
                              if( nums != 0)
                                    std::cout<<numf << " % " << nums << " = "<< (numf % nums) <<std::endl;
                              else
                                    std::cout<<"ERROR:Divivsion by zero not possible"<<std::endl;
                              break;
                        case '^':
                              std::cout<<numf << " ^ " << nums << " = " <<pow(numf, nums)<<std::endl;
                              break;
                        default:
                              std::cout<< "ERROR!Wrong operand"<<std::endl;
                              break;
                  }
            }
            void askToContinue()
            {
                  std::cout<<"Do you wish to continue?(y/n):";
                  std::cin>> cont;
            }

};
int main()
{
      Calculator mycalc;
      mycalc.run();

      return 0;
}