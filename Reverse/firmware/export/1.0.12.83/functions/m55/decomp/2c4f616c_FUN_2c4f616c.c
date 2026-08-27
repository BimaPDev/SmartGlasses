/* FUN_2c4f616c @ 0x2c4f616c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f616c(void)

{
  undefined4 *puVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  short sStack_424;
  undefined1 auStack_422 [1022];
  undefined4 uStack_24;
  
  psVar2 = _LAB_2c4f6234;
  puVar1 = _LAB_2c4f6220;
  puVar7 = _LAB_2c4f6220 + 3;
  uStack_24 = *_LAB_2c4f6224;
  uVar8 = (uint)(_LAB_2c4f621c - (int)_LAB_2c4f6234) >> 5;
  while( true ) {
    do {
      do {
        do {
          iVar3 = FUN_2c6471b4(*puVar1,0xffffffff);
        } while (iVar3 != 0);
        iVar3 = FUN_2c4f6b88(puVar7);
      } while (iVar3 < 1);
      uVar4 = FUN_2c4f6a28(puVar7);
      if (0x400 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4f6228,uVar4);
      }
    } while (uVar4 == 0);
    FUN_2c4f6ab8(puVar7,&sStack_424,uVar4);
    if (uVar8 == 0) break;
    uVar6 = 0;
    psVar5 = psVar2;
    while (*psVar5 != sStack_424) {
      uVar6 = uVar6 + 1;
      psVar5 = psVar5 + 0x10;
      if (uVar8 == uVar6) goto LAB_2c4f6214;
    }
    if (sStack_424 == 1) {
      if (*(code **)(psVar5 + 4) != (code *)0x0) {
        (**(code **)(psVar5 + 4))(auStack_422,uVar4 - 4 & 0xffff);
      }
    }
    else if (*(code **)(psVar5 + 4) != (code *)0x0) {
      (**(code **)(psVar5 + 4))(auStack_422,uVar4 - 2 & 0xffff);
    }
  }
LAB_2c4f6214:
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f6230,_LAB_2c4f622c);
}

