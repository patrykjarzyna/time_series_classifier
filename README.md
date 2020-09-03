# time_series_classifier
University project

# Opis
## 40. SI
Celem programu jest identyfikacja lub klasyfikacja szeregów czasowych w oparciu o
sztuczne sieci neuronowe tworzone przy wykorzystaniu biblioteki Google TensorFlow.
Program na umożliwiać nauczenie sieci modelu, oraz jego późniejszą symulację

# Jak uruchomić
1. docker run -it floopcz/tensorflow_cc:ubuntu /bin/bash  
2. git clone https://github.com/patrykjarzyna/time_series_classifier.git  
3. cd time_series_classifier/src  
4. mkdir build && cd build  
5. cmake .. && make  
6. ./main 
