##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=072_MergeSortedArrays
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Data/Training/DataStructure_Algo
ProjectPath            :=C:/Data/Training/DataStructure_Algo/072_MergeSortedArrays
IntermediateDirectory  :=../build-$(ConfigurationName)/072_MergeSortedArrays
OutDir                 :=../build-$(ConfigurationName)/072_MergeSortedArrays
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Redaaaaaa
Date                   :=15/12/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -std=c++14 -Wall -j8 $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/072_MergeSortedArrays/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/072_MergeSortedArrays/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\072_MergeSortedArrays" mkdir "..\build-$(ConfigurationName)\072_MergeSortedArrays"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\072_MergeSortedArrays" mkdir "..\build-$(ConfigurationName)\072_MergeSortedArrays"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/072_MergeSortedArrays/.d:
	@if not exist "..\build-$(ConfigurationName)\072_MergeSortedArrays" mkdir "..\build-$(ConfigurationName)\072_MergeSortedArrays"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/072_MergeSortedArrays/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/072_MergeSortedArrays/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Data/Training/DataStructure_Algo/072_MergeSortedArrays/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/072_MergeSortedArrays/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/072_MergeSortedArrays/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/072_MergeSortedArrays/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/072_MergeSortedArrays/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/072_MergeSortedArrays/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/072_MergeSortedArrays//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


