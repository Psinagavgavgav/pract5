# Программа для встраивания водяных знаков

Программа для скрытого встраивания произвольных файлов в качестве водяных знаков в другие файлы.

## Назначение модулей

### 1. Модуль работы с файловым диалогом (OpenFileDialog)
**Функции:**
- `string OpenFileDialog(const char* filter)`
- Отвечает за открытие системного диалога выбора файлов
- Поддерживает фильтры для типов файлов
- Возвращает полный путь к выбранному файлу

### 2. Модуль работы с файлами (File Operations)
**Функции:**
- `bool copyFile(const string& from, const string& to)`
- `void embedWatermarkToFile(const string& hostFile, const string& watermarkFile, const string& outputFile)`
- Выполняет бинарное копирование файлов
- Обеспечивает встраивание водяных знаков в конец файлов
- Добавляет маркер для последующего извлечения

### 3. Модуль пользовательского интерфейса (UI)
**Функции:**
- Основная функция `main()`
- Управляет потоком выполнения программы
- Выводит информацию о файлах и процессе работы
- Обрабатывает пользовательский ввод

<img width="548" height="351" alt="Image" src="https://github.com/user-attachments/assets/39328534-a09a-4049-888f-48c00fb5f44e" />

<img width="547" height="253" alt="Image" src="https://github.com/user-attachments/assets/faee3612-73af-4fb6-a66e-a8da08fdfe91" />