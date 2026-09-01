/* FUN_1010c85c @ 0x1010c85c */

int FUN_1010c85c(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  FUN_1013b428(0x24,&local_20);
  FUN_1013b428(0x20,&local_1c);
  puVar2 = PTR_s_GCNanoUltraV_1010c8e0;
  if ((((local_1c != 0x265) && (local_1c != 0x555)) &&
      (puVar2 = PTR_s_GCNanoLiteV_1010c8e4, local_1c != 0x255)) &&
     (puVar2 = PTR_s_GC355_1010c8d8, local_1c != 0x355)) {
    puVar2 = PTR_s_Unknown_1010c8dc;
  }
  iVar1 = FUN_1011ea10(puVar2);
  if (param_1 != 0) {
    FUN_1011ea40(param_1,puVar2,iVar1 + 1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_1c;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_20;
  }
  return iVar1 + 1;
}

