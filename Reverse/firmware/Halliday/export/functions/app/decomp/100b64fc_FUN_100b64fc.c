/* FUN_100b64fc @ 0x100b64fc */

undefined4 FUN_100b64fc(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  piVar1 = DAT_100b658c;
  if (*DAT_100b658c == 0) {
    iVar2 = thunk_FUN_1009f30c(0x10,DAT_100b6590);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      FUN_100a5b78((DAT_100b6598 - DAT_100b6594) * 0x20 & 0xff00U | 0xdf0011,DAT_100b65a0,
                   DAT_100b659c);
      return 0;
    }
  }
  puVar3 = (undefined4 *)*piVar1;
  puVar3[1] = 0;
  puVar3[3] = 0;
  *puVar3 = 2;
  puVar3[2] = param_1;
  FUN_1011ea48(local_3c,0,0x24);
  local_44 = *param_2;
  local_40 = param_2[1];
  local_3c[0] = *(undefined1 *)(param_2 + 2);
  local_38 = param_2[3];
  local_34 = param_2[4];
  local_30 = param_2[5];
  local_2c = param_2[6];
  local_28 = DAT_100b65a4;
  local_24 = param_2[7];
  local_20 = param_2[8];
  FUN_100b62a4(&local_44);
  return 1;
}

