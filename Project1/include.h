#pragma once

#include <iostream> /// input output , std::cout , std::cin
#include <cstdio>  /// printf
#include <algorithm> /// std::max(a,b) , std::sort(a, b) 배열의 a번째 요소부터 b번째 요소까지 정렬, for_each
#include <limits>   //// std::numeric_limits<int>::max(),lowest()
#include <cmath>	/// std::pow(2,3) 2의 3제곱 , std::abs(-123)  절대값
#include <typeinfo> /// typeid(변수나 값).name() 데이터형 알려줌
#include <string>	/// std::string 
#include <cstring>	/// strcpy(복사받을대상,복사할 대상); strcat(destination, source) 스트링 뒤에 붙이기; strcmp(a, b) a와b가 같으면 0출력
#include <cstddef>  /// std::nullptr_t  
#include <array>	/// std::array
#include <vector>	/// std::vector
#include <tuple>	/// std::tuple<자료형, 자료형> getTuple()
#include <functional>  /// std::function
#include <cassert>		/// assert 
#include <cstdarg>		/// for ellipsis
#include <fstream>		/// 파일 출력
#include <random>		/// std::shuffle(arr.begin(), arr.end(), g);
#include <memory>		/// std::unique_ptr
#include <thread>
#include <chrono>
#include <mutex>		/// mutex thread lock 거는거
#include <atomic>		/// thread lock 거는거
#include <future>		/// async, future, promise
#include <numeric>		/// std::inner_product
#include <utility>		/// std::forward