#pragma once

#include <iostream> /// input output , std::cout , std::cin
#include <cstdio>  /// printf
#include <algorithm> /// std::max(a,b) , std::sort(a, b) �迭�� a��° ��Һ��� b��° ��ұ��� ����, for_each
#include <limits>   //// std::numeric_limits<int>::max(),lowest()
#include <cmath>	/// std::pow(2,3) 2�� 3���� , std::abs(-123)  ���밪
#include <typeinfo> /// typeid(������ ��).name() �������� �˷���
#include <string>	/// std::string 
#include <cstring>	/// strcpy(����������,������ ���); strcat(destination, source) ��Ʈ�� �ڿ� ���̱�; strcmp(a, b) a��b�� ������ 0���
#include <cstddef>  /// std::nullptr_t  
#include <array>	/// std::array
#include <vector>	/// std::vector
#include <tuple>	/// std::tuple<�ڷ���, �ڷ���> getTuple()
#include <functional>  /// std::function
#include <cassert>		/// assert 
#include <cstdarg>		/// for ellipsis
#include <fstream>		/// ���� ���
#include <random>		/// std::shuffle(arr.begin(), arr.end(), g);
#include <memory>		/// std::unique_ptr
#include <thread>
#include <chrono>
#include <mutex>		/// mutex thread lock �Ŵ°�
#include <atomic>		/// thread lock �Ŵ°�
#include <future>		/// async, future, promise
#include <numeric>		/// std::inner_product
#include <utility>		/// std::forward