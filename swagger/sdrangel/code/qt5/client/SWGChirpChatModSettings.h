/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 6.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGChirpChatModSettings.h
 *
 * ChirpChatMod
 */

#ifndef SWGChirpChatModSettings_H_
#define SWGChirpChatModSettings_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGChirpChatModSettings: public SWGObject {
public:
    SWGChirpChatModSettings();
    SWGChirpChatModSettings(QString* json);
    virtual ~SWGChirpChatModSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGChirpChatModSettings* fromJson(QString &jsonString) override;

    qint64 getInputFrequencyOffset();
    void setInputFrequencyOffset(qint64 input_frequency_offset);

    qint32 getBandwidthIndex();
    void setBandwidthIndex(qint32 bandwidth_index);

    qint32 getSpreadFactor();
    void setSpreadFactor(qint32 spread_factor);

    qint32 getDeBits();
    void setDeBits(qint32 de_bits);

    qint32 getPreambleChirps();
    void setPreambleChirps(qint32 preamble_chirps);

    qint32 getQuietMillis();
    void setQuietMillis(qint32 quiet_millis);

    qint32 getSyncWord();
    void setSyncWord(qint32 sync_word);

    qint32 getChannelMute();
    void setChannelMute(qint32 channel_mute);

    qint32 getCodingScheme();
    void setCodingScheme(qint32 coding_scheme);

    qint32 getNbParityBits();
    void setNbParityBits(qint32 nb_parity_bits);

    qint32 getHasCrc();
    void setHasCrc(qint32 has_crc);

    qint32 getHasHeader();
    void setHasHeader(qint32 has_header);

    QString* getMyCall();
    void setMyCall(QString* my_call);

    QString* getUrCall();
    void setUrCall(QString* ur_call);

    QString* getMyLoc();
    void setMyLoc(QString* my_loc);

    QString* getMyRpt();
    void setMyRpt(QString* my_rpt);

    qint32 getMessageType();
    void setMessageType(qint32 message_type);

    QString* getBeaconMessage();
    void setBeaconMessage(QString* beacon_message);

    QString* getCqMessage();
    void setCqMessage(QString* cq_message);

    QString* getReplyMessage();
    void setReplyMessage(QString* reply_message);

    QString* getReportMessage();
    void setReportMessage(QString* report_message);

    QString* getReplyReportMessage();
    void setReplyReportMessage(QString* reply_report_message);

    QString* getRrrMessage();
    void setRrrMessage(QString* rrr_message);

    QString* getMessage73();
    void setMessage73(QString* message73);

    QString* getQsoTextMessage();
    void setQsoTextMessage(QString* qso_text_message);

    QString* getTextMessage();
    void setTextMessage(QString* text_message);

    QList<QString*>* getBytesMessage();
    void setBytesMessage(QList<QString*>* bytes_message);

    qint32 getMessageRepeat();
    void setMessageRepeat(qint32 message_repeat);

    qint32 getUdpEnabled();
    void setUdpEnabled(qint32 udp_enabled);

    QString* getUdpAddress();
    void setUdpAddress(QString* udp_address);

    qint32 getUdpPort();
    void setUdpPort(qint32 udp_port);

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    QString* getTitle();
    void setTitle(QString* title);

    qint32 getStreamIndex();
    void setStreamIndex(qint32 stream_index);

    qint32 getUseReverseApi();
    void setUseReverseApi(qint32 use_reverse_api);

    QString* getReverseApiAddress();
    void setReverseApiAddress(QString* reverse_api_address);

    qint32 getReverseApiPort();
    void setReverseApiPort(qint32 reverse_api_port);

    qint32 getReverseApiDeviceIndex();
    void setReverseApiDeviceIndex(qint32 reverse_api_device_index);

    qint32 getReverseApiChannelIndex();
    void setReverseApiChannelIndex(qint32 reverse_api_channel_index);


    virtual bool isSet() override;

private:
    qint64 input_frequency_offset;
    bool m_input_frequency_offset_isSet;

    qint32 bandwidth_index;
    bool m_bandwidth_index_isSet;

    qint32 spread_factor;
    bool m_spread_factor_isSet;

    qint32 de_bits;
    bool m_de_bits_isSet;

    qint32 preamble_chirps;
    bool m_preamble_chirps_isSet;

    qint32 quiet_millis;
    bool m_quiet_millis_isSet;

    qint32 sync_word;
    bool m_sync_word_isSet;

    qint32 channel_mute;
    bool m_channel_mute_isSet;

    qint32 coding_scheme;
    bool m_coding_scheme_isSet;

    qint32 nb_parity_bits;
    bool m_nb_parity_bits_isSet;

    qint32 has_crc;
    bool m_has_crc_isSet;

    qint32 has_header;
    bool m_has_header_isSet;

    QString* my_call;
    bool m_my_call_isSet;

    QString* ur_call;
    bool m_ur_call_isSet;

    QString* my_loc;
    bool m_my_loc_isSet;

    QString* my_rpt;
    bool m_my_rpt_isSet;

    qint32 message_type;
    bool m_message_type_isSet;

    QString* beacon_message;
    bool m_beacon_message_isSet;

    QString* cq_message;
    bool m_cq_message_isSet;

    QString* reply_message;
    bool m_reply_message_isSet;

    QString* report_message;
    bool m_report_message_isSet;

    QString* reply_report_message;
    bool m_reply_report_message_isSet;

    QString* rrr_message;
    bool m_rrr_message_isSet;

    QString* message73;
    bool m_message73_isSet;

    QString* qso_text_message;
    bool m_qso_text_message_isSet;

    QString* text_message;
    bool m_text_message_isSet;

    QList<QString*>* bytes_message;
    bool m_bytes_message_isSet;

    qint32 message_repeat;
    bool m_message_repeat_isSet;

    qint32 udp_enabled;
    bool m_udp_enabled_isSet;

    QString* udp_address;
    bool m_udp_address_isSet;

    qint32 udp_port;
    bool m_udp_port_isSet;

    qint32 rgb_color;
    bool m_rgb_color_isSet;

    QString* title;
    bool m_title_isSet;

    qint32 stream_index;
    bool m_stream_index_isSet;

    qint32 use_reverse_api;
    bool m_use_reverse_api_isSet;

    QString* reverse_api_address;
    bool m_reverse_api_address_isSet;

    qint32 reverse_api_port;
    bool m_reverse_api_port_isSet;

    qint32 reverse_api_device_index;
    bool m_reverse_api_device_index_isSet;

    qint32 reverse_api_channel_index;
    bool m_reverse_api_channel_index_isSet;

};

}

#endif /* SWGChirpChatModSettings_H_ */
