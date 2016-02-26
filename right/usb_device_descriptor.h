#ifndef __USB_DEVICE_DESCRIPTOR_H__
#define __USB_DEVICE_DESCRIPTOR_H__

// Includes:

    #include "usb_keyboard_descriptors.h"
    #include "usb_mouse_descriptors.h"

// Macros:

    #define USB_DEVICE_CLASS (0x00U)
    #define USB_DEVICE_SUBCLASS (0x00U)
    #define USB_DEVICE_PROTOCOL (0x00U)

    #define USB_DEVICE_SPECIFICATION_VERSION (0x0200U)
    #define USB_HID_VERSION (0x0100U)

    #define USB_DEVICE_VENDOR_ID (0x15A2U)
    #define USB_DEVICE_PRODUCT_ID (0x007EU)
    #define USB_DEVICE_RELEASE_NUMBER (0x0101U)

    #define USB_COMPOSITE_CONFIGURATION_INDEX (1U)
    #define USB_DEVICE_CONFIGURATION_COUNT (1U)
    #define USB_REPORT_DESCRIPTOR_COUNT_PER_HID_DEVICE (1U)
    #define USB_DEVICE_MAX_POWER (50U) // Expressed in 2mA units
    #define USB_COMPOSITE_INTERFACE_COUNT (USB_KEYBOARD_INTERFACE_COUNT + USB_MOUSE_INTERFACE_COUNT)

    #define USB_LANGUAGE_ID_UNITED_STATES (0x0409U)
    #define USB_HID_COUNTRY_CODE_NOT_SUPPORTED (0x00U)
    #define USB_INTERFACE_ALTERNATE_SETTING_NONE (0x00U)

    // Descriptor lengths

    #define USB_HID_DESCRIPTOR_LENGTH (9U)
    #define USB_CONFIGURATION_DESCRIPTOR_TOTAL_LENGTH (59U)

    // String descriptors

    #define USB_STRING_DESCRIPTOR_COUNT (5U)

    #define USB_LANGUAGE_LIST_STRING_DESCRIPTOR_LENGTH (4U)
    #define USB_MANUFACTURER_STRING_DESCRIPTOR_LENGTH (58U)
    #define USB_PRODUCT_STRING_DESCRIPTOR_LENGTH (34U)

    #define USB_STRING_DESCRIPTOR_NONE             0U
    #define USB_STRING_DESCRIPTOR_ID_SERIAL_NUMBER 0U
    #define USB_STRING_DESCRIPTOR_ID_MANUFACTURER  1U
    #define USB_STRING_DESCRIPTOR_ID_PRODUCT       2U
    #define USB_STRING_DESCRIPTOR_ID_MOUSE         3U
    #define USB_STRING_DESCRIPTOR_ID_KEYBOARD      4U

// Functions:

    extern usb_status_t USB_DeviceGetDeviceDescriptor(
        usb_device_handle handle, usb_device_get_device_descriptor_struct_t *deviceDescriptor);

    extern usb_status_t USB_DeviceGetConfigurationDescriptor(
        usb_device_handle handle, usb_device_get_configuration_descriptor_struct_t *configurationDescriptor);

    extern usb_status_t USB_DeviceGetStringDescriptor(
        usb_device_handle handle, usb_device_get_string_descriptor_struct_t *stringDescriptor);

    extern usb_status_t USB_DeviceGetHidDescriptor(
        usb_device_handle handle, usb_device_get_hid_descriptor_struct_t *hidDescriptor);

    extern usb_status_t USB_DeviceGetHidReportDescriptor(
        usb_device_handle handle, usb_device_get_hid_report_descriptor_struct_t *hidReportDescriptor);

    extern usb_status_t USB_DeviceGetHidPhysicalDescriptor(
        usb_device_handle handle, usb_device_get_hid_physical_descriptor_struct_t *hidPhysicalDescriptor);

#endif