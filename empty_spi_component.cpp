#include "esphome/core/log.h"
#include "empty_spi_component.h"

namespace esphome {
namespace empty_spi_component {

static const char *TAG = "empty_spi_component.component";

void EmptySPIComponent::setup() override{
    SPI.pins(SCK_PIN, MISO_PIN, MOSI_PIN, CS_PIN);
    SPI.begin();
}

void EmptySPIComponent::loop() override {
    SPI.beginTransaction(...)

    SPI.write(0x42);

}

void EmptySPIComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty SPI component");
}

}  // namespace empty_spi_component
}  // namespace esphome