def ft_aid2(n):
	integer_part = int(n)
	float_part = n - int(n)
	res = ""
	while integer_part:
		aid = integer_part / 2
		if aid == int(aid):
			res = '0' + res
		else:
			res = '1' + res
		integer_part = int(aid)
	if not res:
		res = '0'
	res += '.'
	while float_part :
		aid = float_part * 2
		if int(aid):
			res += '1'
		else:
			res += '0'
		float_part = aid - int(aid)
	if not res[res.index('.')+1:]:
		res += '0'
	return res

print(ft_aid2(375.3003115))
