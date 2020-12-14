#ifndef LIGBM_APPLICATION_H_
#define LIGBM_APPLICATION_H_

#include <memory>
#include <vector>

namespace LiGBM{
	class Application{
	public:
		Application(int argv,char**  argc);
		~Application();

		inline void Run();
	private:
		void InitTrain();
		void Train();
		
	};

	// inline void Run(){

	// 	InitTrain();
	// 	Train();
	// }
}

#endif