##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=14_02_BreadthFirstSearch
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Workset/Udemy_DataStructure_Algo
ProjectPath            :=C:/Workset/Udemy_DataStructure_Algo/14_02_BreadthFirstSearch
IntermediateDirectory  :=../build-$(ConfigurationName)/14_02_BreadthFirstSearch
OutDir                 :=../build-$(ConfigurationName)/14_02_BreadthFirstSearch
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Redaaaaaa
Date                   :=25/12/2021
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
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/14_02_BreadthFirstSearch/BinarySearchTree.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/14_02_BreadthFirstSearch/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/14_02_BreadthFirstSearch/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\14_02_BreadthFirstSearch" mkdir "..\build-$(ConfigurationName)\14_02_BreadthFirstSearch"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\14_02_BreadthFirstSearch" mkdir "..\build-$(ConfigurationName)\14_02_BreadthFirstSearch"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/14_02_BreadthFirstSearch/.d:
	@if not exist "..\build-$(ConfigurationName)\14_02_BreadthFirstSearch" mkdir "..\build-$(ConfigurationName)\14_02_BreadthFirstSearch"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/14_02_BreadthFirstSearch/BinarySearchTree.cpp$(ObjectSuffix): BinarySearchTree.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Workset/Udemy_DataStructure_Algo/14_02_BreadthFirstSearch/BinarySearchTree.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BinarySearchTree.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/14_02_BreadthFirstSearch/BinarySearchTree.cpp$(PreprocessSuffix): BinarySearchTree.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/14_02_BreadthFirstSearch/BinarySearchTree.cpp$(PreprocessSuffix) BinarySearchTree.cpp

../build-$(ConfigurationName)/14_02_BreadthFirstSearch/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Workset/Udemy_DataStructure_Algo/14_02_BreadthFirstSearch/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/14_02_BreadthFirstSearch/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/14_02_BreadthFirstSearch/main.cpp$(PreprocessSuffix) main.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


