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


#include "SWGInstanceSummaryResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGInstanceSummaryResponse::SWGInstanceSummaryResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInstanceSummaryResponse::SWGInstanceSummaryResponse() {
    version = nullptr;
    m_version_isSet = false;
    qt_version = nullptr;
    m_qt_version_isSet = false;
    dsp_rx_bits = 0;
    m_dsp_rx_bits_isSet = false;
    dsp_tx_bits = 0;
    m_dsp_tx_bits_isSet = false;
    pid = 0;
    m_pid_isSet = false;
    appname = nullptr;
    m_appname_isSet = false;
    architecture = nullptr;
    m_architecture_isSet = false;
    os = nullptr;
    m_os_isSet = false;
    logging = nullptr;
    m_logging_isSet = false;
    devicesetlist = nullptr;
    m_devicesetlist_isSet = false;
    featuresetlist = nullptr;
    m_featuresetlist_isSet = false;
}

SWGInstanceSummaryResponse::~SWGInstanceSummaryResponse() {
    this->cleanup();
}

void
SWGInstanceSummaryResponse::init() {
    version = new QString("");
    m_version_isSet = false;
    qt_version = new QString("");
    m_qt_version_isSet = false;
    dsp_rx_bits = 0;
    m_dsp_rx_bits_isSet = false;
    dsp_tx_bits = 0;
    m_dsp_tx_bits_isSet = false;
    pid = 0;
    m_pid_isSet = false;
    appname = new QString("");
    m_appname_isSet = false;
    architecture = new QString("");
    m_architecture_isSet = false;
    os = new QString("");
    m_os_isSet = false;
    logging = new SWGLoggingInfo();
    m_logging_isSet = false;
    devicesetlist = new SWGDeviceSetList();
    m_devicesetlist_isSet = false;
    featuresetlist = new SWGFeatureSetList();
    m_featuresetlist_isSet = false;
}

void
SWGInstanceSummaryResponse::cleanup() {
    if(version != nullptr) { 
        delete version;
    }
    if(qt_version != nullptr) { 
        delete qt_version;
    }



    if(appname != nullptr) { 
        delete appname;
    }
    if(architecture != nullptr) { 
        delete architecture;
    }
    if(os != nullptr) { 
        delete os;
    }
    if(logging != nullptr) { 
        delete logging;
    }
    if(devicesetlist != nullptr) { 
        delete devicesetlist;
    }
    if(featuresetlist != nullptr) { 
        delete featuresetlist;
    }
}

SWGInstanceSummaryResponse*
SWGInstanceSummaryResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInstanceSummaryResponse::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&version, pJson["version"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&qt_version, pJson["qtVersion"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&dsp_rx_bits, pJson["dspRxBits"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dsp_tx_bits, pJson["dspTxBits"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pid, pJson["pid"], "qint32", "");
    
    ::SWGSDRangel::setValue(&appname, pJson["appname"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&architecture, pJson["architecture"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&os, pJson["os"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&logging, pJson["logging"], "SWGLoggingInfo", "SWGLoggingInfo");
    
    ::SWGSDRangel::setValue(&devicesetlist, pJson["devicesetlist"], "SWGDeviceSetList", "SWGDeviceSetList");
    
    ::SWGSDRangel::setValue(&featuresetlist, pJson["featuresetlist"], "SWGFeatureSetList", "SWGFeatureSetList");
    
}

QString
SWGInstanceSummaryResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGInstanceSummaryResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(version != nullptr && *version != QString("")){
        toJsonValue(QString("version"), version, obj, QString("QString"));
    }
    if(qt_version != nullptr && *qt_version != QString("")){
        toJsonValue(QString("qtVersion"), qt_version, obj, QString("QString"));
    }
    if(m_dsp_rx_bits_isSet){
        obj->insert("dspRxBits", QJsonValue(dsp_rx_bits));
    }
    if(m_dsp_tx_bits_isSet){
        obj->insert("dspTxBits", QJsonValue(dsp_tx_bits));
    }
    if(m_pid_isSet){
        obj->insert("pid", QJsonValue(pid));
    }
    if(appname != nullptr && *appname != QString("")){
        toJsonValue(QString("appname"), appname, obj, QString("QString"));
    }
    if(architecture != nullptr && *architecture != QString("")){
        toJsonValue(QString("architecture"), architecture, obj, QString("QString"));
    }
    if(os != nullptr && *os != QString("")){
        toJsonValue(QString("os"), os, obj, QString("QString"));
    }
    if((logging != nullptr) && (logging->isSet())){
        toJsonValue(QString("logging"), logging, obj, QString("SWGLoggingInfo"));
    }
    if((devicesetlist != nullptr) && (devicesetlist->isSet())){
        toJsonValue(QString("devicesetlist"), devicesetlist, obj, QString("SWGDeviceSetList"));
    }
    if((featuresetlist != nullptr) && (featuresetlist->isSet())){
        toJsonValue(QString("featuresetlist"), featuresetlist, obj, QString("SWGFeatureSetList"));
    }

    return obj;
}

QString*
SWGInstanceSummaryResponse::getVersion() {
    return version;
}
void
SWGInstanceSummaryResponse::setVersion(QString* version) {
    this->version = version;
    this->m_version_isSet = true;
}

QString*
SWGInstanceSummaryResponse::getQtVersion() {
    return qt_version;
}
void
SWGInstanceSummaryResponse::setQtVersion(QString* qt_version) {
    this->qt_version = qt_version;
    this->m_qt_version_isSet = true;
}

qint32
SWGInstanceSummaryResponse::getDspRxBits() {
    return dsp_rx_bits;
}
void
SWGInstanceSummaryResponse::setDspRxBits(qint32 dsp_rx_bits) {
    this->dsp_rx_bits = dsp_rx_bits;
    this->m_dsp_rx_bits_isSet = true;
}

qint32
SWGInstanceSummaryResponse::getDspTxBits() {
    return dsp_tx_bits;
}
void
SWGInstanceSummaryResponse::setDspTxBits(qint32 dsp_tx_bits) {
    this->dsp_tx_bits = dsp_tx_bits;
    this->m_dsp_tx_bits_isSet = true;
}

qint32
SWGInstanceSummaryResponse::getPid() {
    return pid;
}
void
SWGInstanceSummaryResponse::setPid(qint32 pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString*
SWGInstanceSummaryResponse::getAppname() {
    return appname;
}
void
SWGInstanceSummaryResponse::setAppname(QString* appname) {
    this->appname = appname;
    this->m_appname_isSet = true;
}

QString*
SWGInstanceSummaryResponse::getArchitecture() {
    return architecture;
}
void
SWGInstanceSummaryResponse::setArchitecture(QString* architecture) {
    this->architecture = architecture;
    this->m_architecture_isSet = true;
}

QString*
SWGInstanceSummaryResponse::getOs() {
    return os;
}
void
SWGInstanceSummaryResponse::setOs(QString* os) {
    this->os = os;
    this->m_os_isSet = true;
}

SWGLoggingInfo*
SWGInstanceSummaryResponse::getLogging() {
    return logging;
}
void
SWGInstanceSummaryResponse::setLogging(SWGLoggingInfo* logging) {
    this->logging = logging;
    this->m_logging_isSet = true;
}

SWGDeviceSetList*
SWGInstanceSummaryResponse::getDevicesetlist() {
    return devicesetlist;
}
void
SWGInstanceSummaryResponse::setDevicesetlist(SWGDeviceSetList* devicesetlist) {
    this->devicesetlist = devicesetlist;
    this->m_devicesetlist_isSet = true;
}

SWGFeatureSetList*
SWGInstanceSummaryResponse::getFeaturesetlist() {
    return featuresetlist;
}
void
SWGInstanceSummaryResponse::setFeaturesetlist(SWGFeatureSetList* featuresetlist) {
    this->featuresetlist = featuresetlist;
    this->m_featuresetlist_isSet = true;
}


bool
SWGInstanceSummaryResponse::isSet(){
    bool isObjectUpdated = false;
    do{
        if(version && *version != QString("")){
            isObjectUpdated = true; break;
        }
        if(qt_version && *qt_version != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_dsp_rx_bits_isSet){
            isObjectUpdated = true; break;
        }
        if(m_dsp_tx_bits_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pid_isSet){
            isObjectUpdated = true; break;
        }
        if(appname && *appname != QString("")){
            isObjectUpdated = true; break;
        }
        if(architecture && *architecture != QString("")){
            isObjectUpdated = true; break;
        }
        if(os && *os != QString("")){
            isObjectUpdated = true; break;
        }
        if(logging && logging->isSet()){
            isObjectUpdated = true; break;
        }
        if(devicesetlist && devicesetlist->isSet()){
            isObjectUpdated = true; break;
        }
        if(featuresetlist && featuresetlist->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

