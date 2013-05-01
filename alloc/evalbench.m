function evalbench
%%
bench0 = tdfread('bench/bench_norm.txt');
bench1 = tdfread('bench/bench_prof.txt');
names = cellstr(bench0.name);
types = cellstr(bench0.type);
unames = unique(names);
utypes = unique(types);
nunames = numel(unames);
nutypes = numel(utypes);
meanplotmat = zeros(nunames, nutypes*2);
varplotmat = zeros(nunames, nutypes*2);
ucmd = cell(1, nunames);
for i=1:nunames
   select0 = cellfun(@(x) strcmp(x, unames{i}), names);
   name = unames{i};
   g = regexp(name, ' ', 'split');
   ucmd{i} = g{1};
   for j=1:nutypes
       type = utypes{j};
       select1 = cellfun(@(x) strcmp(x, utypes{j}), types);
       select2 = select0 & select1;
       times = bench0.time(select2);
       meanplotmat(i,j) = mean(times);
       varplotmat(i,j) = var(times);
       
       times = bench1.time(select2);
       meanplotmat(i,3+j) = mean(times);
       varplotmat(i,3+j) = var(times);
   end
end
tdiff = (meanplotmat(:,1:3)-meanplotmat(:,4:6)) ./ meanplotmat(:,1:3) * 100;
tdiff2 = (meanplotmat(:,1)-meanplotmat(:,3)) ./ meanplotmat(:,1) * 100;
disp('plotting'); figure(1);
barwitherr(varplotmat, meanplotmat);
set(gca,'XTickLabel',ucmd);
colormap gray; grid on;
legend('basic', 'greedy', 'PBQP', 'basic pgo', 'greedy pgo' , 'PBQP pgo');
ylabel('Execution time (s)'); xlabel('Benchmark Name');

%%
bench0 = tdfread('bench/bench_norm.txt');
names = cellstr(bench0.name);
types = cellstr(bench0.type);
unames = unique(names);
utypes = unique(types);
nunames = numel(unames);
nutypes = numel(utypes);
meanplotmat = zeros(nunames, nutypes);
varplotmat = zeros(nunames, nutypes);
ucmd = cell(1, nunames);
for i=1:nunames
   select0 = cellfun(@(x) strcmp(x, unames{i}), names);
   name = unames{i};
   g = regexp(name, ' ', 'split');
   ucmd{i} = g{1};
   for j=1:nutypes
       type = utypes{j};
       select1 = cellfun(@(x) strcmp(x, utypes{j}), types);
       select2 = select0 & select1;
       times = bench0.time(select2);
       meanplotmat(i,j) = min(times);
       varplotmat(i,j) = var(times);
      
   end
end

disp('plotting'); figure(1);
barwitherr(varplotmat, meanplotmat);
set(gca,'XTickLabel',ucmd);
colormap gray; grid on;
legend('basic', 'greedy', 'PBQP', 'basic pgo', 'greedy pgo' , 'PBQP pgo');
ylabel('Execution time (s)'); xlabel('Benchmark Name');
end