/* FUN_2c4981f8 @ 0x2c4981f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4981f8(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  byte bStack_1d;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  uVar6 = 0;
  pbVar5 = (byte *)(param_1 + -1);
  bVar7 = 0;
  iStack_14 = *_LAB_2c498310;
  uVar3 = 0xfffffffe;
  uStack_1c = *_LAB_2c49830c;
  uStack_18 = _LAB_2c49830c[1];
  do {
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
    if (bVar1 != 0) {
      uVar4 = 7;
      if (uVar3 == 0xfffffffe) goto LAB_2c49826e;
      while (uVar3 != 0xffffffff) {
        uVar2 = uVar3 & 0xff;
        uVar3 = (uint)(char)((char)uVar3 + -1);
        uVar6 = ((int)(uint)(*(byte *)((int)&uStack_1c + uVar4) & bVar1) >> (uVar4 & 0xff)) << uVar2
                & 0xffffU | uVar6;
        if (uVar3 == 0xffffffff) goto LAB_2c498288;
        while( true ) {
          bVar8 = uVar4 == 0;
          uVar4 = uVar4 - 1;
          if (bVar8) goto LAB_2c49822a;
          if (uVar3 != 0xfffffffe) break;
LAB_2c49826e:
          if (bVar7 == 0) {
            bVar7 = (bVar1 & *(byte *)((int)&uStack_1c + uVar4)) != 0;
          }
          else if (bVar7 == 1) {
            if ((bVar1 & *(byte *)((int)&uStack_1c + uVar4)) == 0) {
              bVar7 = 2;
            }
            else {
              bVar7 = 0;
            }
          }
          else if (bVar7 == 2) {
            if ((bVar1 & *(byte *)((int)&uStack_1c + uVar4)) == 0) {
              bVar7 = 3;
            }
            else {
              bVar7 = 0;
            }
          }
          else if (bVar7 == 3) {
            bVar7 = *(byte *)((int)&uStack_1c + uVar4) & bVar1;
            if (bVar7 != 0) {
              if (uVar4 == 0) {
                uVar3 = 0xb;
                bVar7 = 4;
                goto LAB_2c49822e;
              }
              bVar7 = 4;
              uVar3 = 10;
              uVar6 = uVar6 | ((int)(uint)((&bStack_1d)[uVar4] & bVar1) >> (uVar4 - 1 & 0xff) &
                              0x1fU) << 0xb;
              uVar4 = uVar4 - 1;
            }
          }
          else {
            bVar7 = 0;
          }
        }
      }
      do {
        bVar8 = uVar4 != 0;
        uVar4 = uVar4 - 1;
      } while (bVar8);
      break;
    }
    bVar7 = 0;
LAB_2c49822a:
    if (uVar3 == 0xffffffff) break;
LAB_2c49822e:
  } while ((byte *)(param_1 + 0x76b) != pbVar5);
LAB_2c498288:
  if (*_LAB_2c498310 == *_LAB_2c498310) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

