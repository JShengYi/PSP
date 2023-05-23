//########################################################################
//## Copyright 2018 Da Yan http://www.cs.uab.edu/yanda
//##
//## Licensed under the Apache License, Version 2.0 (the "License");
//## you may not use this file except in compliance with the License.
//## You may obtain a copy of the License at
//##
//## //http://www.apache.org/licenses/LICENSE-2.0
//##
//## Unless required by applicable law or agreed to in writing, software
//## distributed under the License is distributed on an "AS IS" BASIS,
//## WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//## See the License for the specific language governing permissions and
//## limitations under the License.
//########################################################################

/**
 *  剪枝器，用于导入数据时剪去一些不符合的数据
 */

#ifndef TRIMMER_H_
#define TRIMMER_H_

template <class VertexT>
class Trimmer {
public:
	virtual void trim(VertexT & v) = 0;
};

#endif /* TRIMMER_H_ */
