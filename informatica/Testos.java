

import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

/**
 * The test class Test.
 *
 * @author  (your name)
 * @version (a version number or a date)
 */
public class Testos
{
    private Carcaj carcaj1;
    private Flecha flecha1;
    private Flecha flecha2;
    private Flecha flecha3;
    private Flecha flecha4;
    private Flecha flecha5;
    private Flecha flecha6;

    /**
     * Default constructor for test class Test
     */
    public Testos()
    {
    }

    /**
     * Sets up the test fixture.
     *
     * Called before every test case method.
     */
    @BeforeEach
    public void setUp()
    {
        carcaj1 = new Carcaj();
        flecha1 = new Flecha();
        flecha2 = new Flecha();
        flecha3 = new Flecha();
        flecha4 = new Flecha();
        flecha5 = new Flecha();
        flecha6 = new Flecha();
    }

    /**
     * Tears down the test fixture.
     *
     * Called after every test case method.
     */
    @AfterEach
    public void tearDown()
    {
    }

    @Test
    public void Pruebita()
    {
        assertEquals(5, flecha1.getPeso());
    }
}

