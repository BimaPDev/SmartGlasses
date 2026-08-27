/* FUN_1406fcb4 @ 0x1406fcb4 */

int FUN_1406fcb4(uint param_1,undefined2 param_2,uint param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  local_2c = *DAT_1406fdc8;
  if ((param_1 < 2) && (iVar4 = *(int *)(DAT_1406fdcc + (param_1 + 6) * 4), iVar4 != 0)) {
    if ((int)((uint)*(byte *)(iVar4 + 0x3a) << 0x1d) < 0) {
      if ((param_3 < 0x40) || (param_4 == 0)) {
        iVar4 = 0x40;
      }
      else if (param_3 < 0x801) {
        local_34 = 0;
        puVar5 = (undefined1 *)(param_5 + -1);
        do {
          puVar1 = puVar5 + 1;
          puVar2 = (undefined4 *)FUN_140709d0(param_1,*puVar1);
          if (((puVar2 == (undefined4 *)0x0) ||
              ((int)((uint)*(ushort *)((int)puVar2 + 0x12) << 0x18) < 0)) ||
             (param_3 < *(ushort *)(puVar2 + 6))) goto LAB_1406fd96;
          if (((uint)puVar5 & 0xff) == ((uint)(param_5 + -1) & 0xff)) {
            local_34 = *puVar2;
          }
          puVar5 = puVar1;
        } while ((undefined1 *)(param_5 + (param_4 - 1U & 0xff)) != puVar1);
        iVar4 = FUN_1406e284(param_1,0,5,DAT_1406fdd0,param_4 + 0x20,&local_30);
        if (iVar4 == 0) {
          uVar3 = param_3 - 4 & 0xffff;
          *(short *)(local_30 + 0x1a) = (short)(param_3 - 4);
          *(undefined2 *)(local_30 + 0x14) = param_2;
          *(undefined4 *)(local_30 + 0x10) = local_34;
          *(short *)(local_30 + 0x18) = (short)param_3;
          *(undefined1 *)(local_30 + 0x1c) = 0;
          *(char *)(local_30 + 0x1e) = (char)param_4;
          *(short *)(local_30 + 0x16) = (short)(((uVar3 - 1) + param_3) / uVar3) + 1;
          FUN_140e5278(local_30 + 0x1f,param_5,param_4);
          FUN_1406e3c0(param_1,local_30);
        }
      }
      else {
        iVar4 = 0x31;
      }
    }
    else {
      iVar4 = 0x42;
    }
  }
  else {
LAB_1406fd96:
    iVar4 = 0x43;
  }
  if (*DAT_1406fdc8 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return iVar4;
}

