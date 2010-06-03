#!/usr/bin/env ruby
require 'rubygems'
require 'json'
require 'pp'

if ARGV.size < 0
  puts 'ruby json-parse.rb out.json'
  exit 1
end
begin
  pp JSON.parse open(ARGV.first).read
  puts 'parse success'
rescue
  puts 'parse failed'
end


