##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=manipulator
ConfigurationName      :=Debug
WorkspacePath          :=D:/workspace/dev/cpp-dev
ProjectPath            :=D:/workspace/dev/cpp-dev/manipulator
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=taufiq
Date                   :=02/12/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/msys64/usr/bin/g++.exe
SharedObjectLinkerName :=C:/msys64/usr/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="manipulator.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/msys64/usr/bin/windres.exe
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
AR       := C:/msys64/usr/bin/ar.exe
CXX      := C:/msys64/usr/bin/g++.exe
CC       := C:/msys64/usr/bin/gcc.exe
CXXFLAGS := -Wmain -g -pedantic -W -std=c++17 -std=c++14 -std=c++11 -Wall -Wmain -pedantic-errors -Wfatal-errors -g -W -std=c++17 -std=c++14 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/msys64/usr/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/manipulator.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/manipulator.cpp$(ObjectSuffix): manipulator.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/workspace/dev/cpp-dev/manipulator/manipulator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/manipulator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/manipulator.cpp$(PreprocessSuffix): manipulator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/manipulator.cpp$(PreprocessSuffix) manipulator.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/workspace/dev/cpp-dev/manipulator/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


