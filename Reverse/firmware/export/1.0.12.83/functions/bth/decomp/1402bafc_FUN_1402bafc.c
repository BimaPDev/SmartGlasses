/* FUN_1402bafc @ 0x1402bafc */

undefined4 FUN_1402bafc(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  puVar2 = DAT_1402bb58;
  if ((param_1 == 0) || (param_2 == 0)) {
    return 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (1 < *DAT_1402bb50 - 1) {
    return 2;
  }
  *DAT_1402bb54 = param_1;
  piVar3 = DAT_1402bb60;
  *DAT_1402bb5c = param_2;
  uVar4 = DAT_1402bb64;
  uVar1 = *puVar2;
  *piVar3 = param_3;
  FUN_1402ca08(uVar1,uVar4,0);
  if (*DAT_1402bb68 != '\x01') {
    *DAT_1402bb68 = '\x01';
    FUN_1402b29c();
    return 0;
  }
  return 0;
}

