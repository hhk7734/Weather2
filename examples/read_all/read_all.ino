#include <Weather2.h>

#define SEALEVELPRESSURE_HPA ( 1013.25 )

Weather2 weather;

void setup( void )
{
    // weather.begin( &Wire3 );
    weather.begin();
}

void loop( void )
{
    Serial.print( "UV = " );
    Serial.println( weather.readUV() );

    Serial.print( "Visible = " );
    Serial.println( weather.readVisible() );

    Serial.print( "IR = " );
    Serial.println( weather.readIR() );

    Serial.print( "Temperature = " );
    Serial.print( weather.readTemperature() );
    Serial.println( " *C" );

    Serial.print( "Humidity = " );
    Serial.print( weather.readHumidity() );
    Serial.println( " %" );

    Serial.print( "Pressure = " );
    Serial.print( weather.readPressure() / 100.0F );
    Serial.println( " hPa" );

    Serial.print( "Approx. Altitude = " );
    Serial.print( weather.readAltitude( SEALEVELPRESSURE_HPA ) );
    Serial.println( " m" );

    Serial.println();
    delay( 1000 );
}