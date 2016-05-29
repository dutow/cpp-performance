
# run this script from the repo root!

if ARGV.count < 3
  $stderr.puts "Too few arguments! Required: size, seed, loop"
  exit
end

require 'benchmark'

PROGS = %w(copyable copy-forloop forloop movevec forloop-unified rangev3 rangev3-unified)

Benchmark.bm do |x|
  PROGS.each do |p|
	  x.report(p) { `./build/test1/#{p}/test1-#{p} #{ARGV[0]} #{ARGV[1]} #{ARGV[2]}` }
  end
end
