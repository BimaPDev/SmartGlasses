/* FUN_100c4d50 @ 0x100c4d50 */

void FUN_100c4d50(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    uVar3 = *(uint *)(param_1 + 4);
    uVar2 = DAT_100c4db8;
  }
  else {
    if (cVar1 == '\x02') {
      FUN_10119ddc(param_2,param_3,DAT_100c4dbc,*(undefined4 *)(param_1 + 0xd),
                   *(undefined2 *)(param_1 + 0xb),*(undefined2 *)(param_1 + 9),
                   *(undefined2 *)(param_1 + 7),*(undefined4 *)(param_1 + 3),
                   *(undefined2 *)(param_1 + 1));
      return;
    }
    if (cVar1 != '\0') {
      FUN_1011ea48(param_2,0);
      return;
    }
    uVar3 = (uint)*(ushort *)(param_1 + 2);
    uVar2 = DAT_100c4db4;
  }
  FUN_10119ddc(param_2,param_3,uVar2,uVar3);
  return;
}

