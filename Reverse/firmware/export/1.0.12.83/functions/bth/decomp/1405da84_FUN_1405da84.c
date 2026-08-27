/* FUN_1405da84 @ 0x1405da84 */

void FUN_1405da84(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_18;
  uint local_14;
  
  iVar2 = DAT_1405db04;
  local_14 = *DAT_1405db00;
  if (param_1 < 0xb) {
    iVar5 = *(int *)(DAT_1405db04 + (param_1 + 0x1a) * 4);
    if ((iVar5 != 0) && (*(char *)(iVar5 + 0xf) == '\x01')) {
      if ((int)((*(uint *)(DAT_1405db04 + 0x9c) >> *(sbyte *)(iVar5 + 0xc)) << 0x1f) < 0) {
        iVar4 = 0x4f;
      }
      else {
        uVar6 = FUN_14063910(1,0x10,DAT_1405db08,&local_18);
        param_2 = (uint)((ulonglong)uVar6 >> 0x20);
        iVar4 = (int)uVar6;
        if (iVar4 == 0) {
          bVar1 = *(byte *)(iVar5 + 0xc);
          param_2 = (uint)bVar1;
          *(undefined1 *)(local_18 + 0xd) = 3;
          uVar3 = DAT_1405db0c;
          *(byte *)(local_18 + 0xc) = bVar1;
          *(undefined2 *)(local_18 + 0xe) = 0;
          *(undefined4 *)(local_18 + 8) = uVar3;
          *(uint *)(iVar2 + 0x9c) = 1 << *(sbyte *)(iVar5 + 0xc) | *(uint *)(iVar2 + 0x9c);
        }
      }
      goto LAB_1405daa8;
    }
  }
  iVar4 = 0x43;
LAB_1405daa8:
  if ((*DAT_1405db00 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(iVar4,param_2,*DAT_1405db00 ^ local_14,0);
}

