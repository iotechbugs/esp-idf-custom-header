#include <stdio.h>
#include <esp_wifi.h>
#include <my-header.h>

extern "C" {
void app_main(void);
}


void app_main() {
	uint8_t i = 0;
	while(true){
		test_method(i);
		vTaskDelay(1000 / portTICK_RATE_MS);
		i++;
	}
}
