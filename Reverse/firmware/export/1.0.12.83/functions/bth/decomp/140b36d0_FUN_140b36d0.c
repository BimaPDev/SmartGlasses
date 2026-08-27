/* FUN_140b36d0 @ 0x140b36d0 */

void FUN_140b36d0(uint param_1)

{
  byte *pbVar1;
  
  pbVar1 = DAT_140b3720;
  FUN_1402a6e8(4,0xb0,DAT_140b372c,DAT_140b3728,DAT_140b3724,*DAT_140b3720,param_1);
  param_1 = *pbVar1 | param_1;
  *pbVar1 = (byte)param_1;
  if (param_1 != 3) {
    return;
  }
  FUN_140253fc();
  FUN_140a49fc(1,DAT_140b3730,6);
  return;
}

