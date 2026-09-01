/* FUN_10121b14 @ 0x10121b14 */

void FUN_10121b14(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  uVar1 = 0xffffffff;
  psVar3 = (short *)(iVar4 + 0x1db4);
  do {
    if (1 < (ushort)psVar3[1]) {
      uVar2 = 0;
      do {
        if (*(short *)(*(int *)(*(int *)(iVar4 + 0x74) + 0xc) + uVar2 * 8) == *psVar3) {
          uVar1 = uVar1 & ~(1 << (uVar2 & 0xff));
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != 8);
    }
    psVar3 = psVar3 + 2;
    if (psVar3 == (short *)(iVar4 + 0x1dc4)) {
      *param_2 = uVar1;
      return;
    }
  } while( true );
}

