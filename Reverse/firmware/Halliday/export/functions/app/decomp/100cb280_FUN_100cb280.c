/* FUN_100cb280 @ 0x100cb280 */

int FUN_100cb280(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 1) == '\x04') && (*(char *)((int)param_1 + 0xd) == '\a')) {
    iVar1 = FUN_1013270a(DAT_100cb318,param_2,0,0,param_4);
    if (iVar1 == 0) {
      iVar3 = -0xc;
    }
    else {
      iVar3 = iVar1 + 8;
      FUN_100c1bc4(iVar3,3);
      puVar2 = (undefined2 *)FUN_100c1f10(iVar3,3);
      *puVar2 = *param_1;
      *(char *)(puVar2 + 1) = (char)param_3;
      FUN_101327a0(iVar3,param_2,param_3);
      *(undefined1 *)(iVar1 + 0x14) = 7;
      iVar3 = FUN_100c7518(iVar1);
      if (iVar3 == 0) {
        param_1[0x4b] = param_1[0x4b] + 1;
      }
      else {
        FUN_100a5b78(DAT_100cb328 | ((int)PTR_DAT_100cb320 - (int)PTR_DAT_100cb31c) * 0x20 & 0xff00U
                     ,DAT_100cb32c,PTR_s_Unable_to_send_to_driver__err__d_100cb324,iVar3);
        FUN_100c1c90(iVar1);
      }
    }
  }
  else {
    iVar3 = -5;
  }
  return iVar3;
}

