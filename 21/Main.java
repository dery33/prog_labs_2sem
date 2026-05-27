class Movie{
  String title;
  Movie(String title){
    this.title = title;
  }
  public class Subtitles{
    void show(){
      System.out.println("subtitle for "+Movie.this.title);
    
  }
}
}
public class Main {
    public static void main(String[] args) {
      Movie movie = new Movie("1");
      Movie.Subtitles subtitles = movie.new Subtitles();
      subtitles.show();
    }
}
