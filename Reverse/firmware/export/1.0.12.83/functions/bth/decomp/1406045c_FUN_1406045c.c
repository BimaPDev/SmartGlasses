/* FUN_1406045c @ 0x1406045c */

void FUN_1406045c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5,
                 byte *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  byte local_2d;
  undefined4 local_2c;
  undefined2 local_28;
  bool local_26;
  uint local_24;
  
  local_24 = *DAT_14060508;
  if (param_4 == 0) {
    puVar3 = (undefined4 *)FUN_140431f4();
    local_2c = *puVar3;
    local_28 = *(undefined2 *)(puVar3 + 1);
  }
  else {
    local_2c = *param_5;
    local_28 = *(undefined2 *)(param_5 + 1);
  }
  local_26 = param_4 != 0;
  iVar2 = FUN_140543b4(*(undefined1 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),param_2,&local_2c
                       ,param_3,&local_2d);
  iVar1 = DAT_1406050c;
  iVar4 = DAT_1406050c + (uint)local_2d * 6;
  *(undefined4 *)(iVar4 + 0x52) = local_2c;
  *(undefined2 *)(iVar4 + 0x56) = local_28;
  if (iVar2 == 0) {
    *(char *)(iVar1 + 0x60) = *(char *)(iVar1 + 0x60) + '\x01';
    *param_6 = local_2d;
  }
  if ((*DAT_14060508 ^ local_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(iVar2,(uint)local_2d,*DAT_14060508 ^ local_24,0);
}

