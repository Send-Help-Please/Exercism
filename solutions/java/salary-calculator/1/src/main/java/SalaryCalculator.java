public class SalaryCalculator {
    public double salaryMultiplier(int daysSkipped) {
        return daysSkipped >= 5 ? 0.85 : 1.0;
    }

    public int bonusMultiplier(int productsSold) {
        return productsSold >= 20 ? 13 : 10;
    }

    public double bonusForProductsSold(int productsSold) {
        double bonusMultiplier = bonusMultiplier(productsSold);
        return productsSold * bonusMultiplier;
    }

    public double finalSalary(int daysSkipped, int productsSold) {
        double finalSalary = bonusForProductsSold(productsSold) + (salaryMultiplier(daysSkipped) * 1000);
        
        return finalSalary > 2000 ? 2000 : finalSalary;
    } 
}
