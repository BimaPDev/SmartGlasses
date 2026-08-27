/* FUN_14052da0 @ 0x14052da0 */

void FUN_14052da0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  ushort *local_20;
  int local_1c;
  
  local_1c = *DAT_14052e18;
  iVar2 = FUN_14053dc8(0);
  local_20 = (ushort *)0x0;
  if (param_4 == *(ushort *)(iVar2 + 6) + 3) {
    bVar1 = *(byte *)(iVar2 + param_1 + 4);
    FUN_14054210(&local_20,2,param_3);
    puVar4 = local_20;
    if (local_20 != (ushort *)0x0) {
      puVar4 = (ushort *)((int)local_20 + local_20[3] + 0x30);
    }
    *puVar4 = (ushort)bVar1;
    uVar5 = 2;
    uVar3 = 0;
  }
  else {
    uVar3 = 6;
    uVar5 = 0;
  }
  FUN_1406af68(param_1,param_2,param_3,uVar3,uVar5,local_20);
  FUN_140735a8(local_20);
  if (*DAT_14052e18 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

