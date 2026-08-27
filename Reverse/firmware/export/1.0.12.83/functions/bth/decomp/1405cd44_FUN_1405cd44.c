/* FUN_1405cd44 @ 0x1405cd44 */

void FUN_1405cd44(int param_1,int param_2,int param_3,undefined4 param_4,char param_5,
                 undefined1 param_6)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined2 local_2e;
  int local_2c;
  
  iVar2 = DAT_1405ce30;
  local_2c = *DAT_1405ce34;
  iVar4 = *(int *)(DAT_1405ce30 + param_1 * 4);
  if ((*(byte *)(DAT_1405ce30 + 0x50) & 4) != 0) {
    FUN_14067590(param_1,*(undefined1 *)(DAT_1405ce30 + 0x4f));
  }
  if ((param_2 == 0) || (param_3 == 0)) {
    *(undefined4 *)(iVar4 + 0x34) = 0;
    bVar1 = *(byte *)(iVar2 + 0x50);
    if ((bVar1 & 8) == 0) {
      if ((int)((uint)bVar1 << 0x1b) < 0) {
        local_2e = 0x2b3a;
        FUN_14064be4(param_1,*(undefined1 *)(iVar2 + 0x4f),0xff,1,0xffff,bVar1 & 8,&local_2e);
      }
      if (*DAT_1405ce34 == local_2c) {
        return;
      }
    }
    else if (*DAT_1405ce34 == local_2c) {
      FUN_1405cce4(param_1,0,DAT_1405ce38,0);
      return;
    }
  }
  else {
    *(char *)(iVar4 + 0x36) = ((char)param_4 + '\x01') - (char)param_3;
    piVar3 = DAT_1405ce34;
    *(undefined1 *)(iVar4 + 0x38) = param_6;
    *(short *)(iVar4 + 0x34) = (short)param_3;
    *(char *)(iVar4 + 0x37) = param_5 - (char)param_3;
    if (*piVar3 == local_2c) {
      FUN_1406b558(param_1,*(undefined1 *)(iVar2 + 0x4f),param_3,param_4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

