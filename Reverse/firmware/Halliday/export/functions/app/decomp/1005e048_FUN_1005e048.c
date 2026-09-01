/* FUN_1005e048 @ 0x1005e048 */

int FUN_1005e048(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  local_c = param_2;
  uVar2 = FUN_100568ac();
  iVar1 = DAT_1005e094;
  FUN_1011ea40(DAT_1005e094,uVar2,0x80);
  local_10 = 0;
  local_c = 0;
  iVar3 = FUN_100737bc(DAT_1005e098,&local_10,8);
  if (iVar3 == 8) {
    *(undefined4 *)(iVar1 + 4) = local_10;
    *(undefined4 *)(iVar1 + 8) = local_c;
  }
  else {
    FUN_10119dc2(DAT_1005e09c);
    local_10 = *(undefined4 *)(iVar1 + 4);
    local_c = local_10;
    FUN_1007375c(DAT_1005e098,&local_10,8);
  }
  return DAT_1005e094;
}

