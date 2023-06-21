total_Record=10
numGolfRecords=4
uncond=numGolfRecords/total_Record
print("unconditional probability of golf",uncond)
medRisk_and_Single=2
medRisk=3
probMedRiskSingle=medRisk_and_Single/total_Record
probMedRisk=medRisk/total_Record
cond=(probMedRiskSingle/probMedRisk)
print("conditional prob ",cond)