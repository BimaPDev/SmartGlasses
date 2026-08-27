/* FUN_2c4b76d0 @ 0x2c4b76d0 */

void FUN_2c4b76d0(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = FUN_2c4bfdec(param_2);
  puVar2 = DAT_2c4b7738;
  puVar1 = DAT_2c4b772c;
  uVar7 = param_1 & 0xfffcffff;
  while( true ) {
    if (uVar7 == 0) {
      return;
    }
    bVar3 = FUN_2c49ad00(uVar7);
    uVar6 = 1 << (uint)bVar3;
    uVar7 = uVar7 & ~uVar6;
    bVar4 = FUN_2c4b7634(uVar6,*puVar1,*puVar2);
    if (5 < bVar4) break;
    FUN_2c4b75b0(1 << (uint)bVar4,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4b7734,DAT_2c4b7730,param_1,(uint)bVar3);
}

