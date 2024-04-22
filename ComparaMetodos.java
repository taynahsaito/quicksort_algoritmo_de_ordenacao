import java.util.Date;
import java.util.Scanner;

public class ComparaMetodos {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        MeuVetor v;
        long ini, fim; //marcadores de inicio e fim
        System.out.print("escolha o tamanho do vetor, 0 encerra: ");
        int tamanho = scanner.nextInt();
        while (tamanho > 0){
            v = new MeuVetor(tamanho);

            v.preencheVetor(tamanho * 10);
            //System.out.println("primeiro vetor gerado\n" + v);
            ini = new Date().getTime(); 

            v.bubbleSort();
            fim = new Date().getTime();

            //System.out.println("vetor ordenado pelo bubble\n" + v);
            System.out.println("bubble demorou " + (fim-ini) + " ms");
            v.resetVetor(); // para não dar erro de memória na heap

            v.preencheVetor(tamanho * 10);
            //System.out.println("segundo vetor gerado\n" + v);
            ini = new Date().getTime();
            v.quickSort(0, tamanho - 1);
            fim = new Date().getTime();
            //System.out.println("vetor ordenado pelo quick\n" + v);
            System.out.println("quick demorou " + (fim-ini) + " ms");
            System.out.print("escolha o tamanho do vetor, 0 encerra: ");
            tamanho = scanner.nextInt();
        }
        scanner.close();
    }
}
