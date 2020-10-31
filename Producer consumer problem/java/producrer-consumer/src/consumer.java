import java.util.List;

public class consumer implements Runnable{
    public List<String> buffer;

    public consumer(List<String> buffer) {
        this.buffer = buffer;
    }

    @Override
    public void run() {

    }
}
