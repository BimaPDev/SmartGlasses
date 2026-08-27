/* FUN_2c4795b4 @ 0x2c4795b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4795b4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short sVar5;
  uint uVar6;
  
  iVar2 = _LAB_2c47964c;
  iVar1 = _LAB_2c479648;
  psVar4 = *(short **)(_LAB_2c479648 + 0x510);
  if (psVar4 == (short *)0x0) {
    sVar5 = *(short *)(_LAB_2c479648 + 0x204e);
  }
  else {
    sVar5 = *(short *)(_LAB_2c479648 + 0x204e);
    do {
      if (*psVar4 == sVar5) {
        return 0;
      }
      psVar4 = *(short **)(psVar4 + 6);
    } while (psVar4 != (short *)0x0);
  }
  uVar6 = (uint)*(ushort *)(_LAB_2c47964c + 0xe4c);
  psVar4 = (short *)FUN_2c47245c(3,0x10);
  if (psVar4 != (short *)0x0) {
    *psVar4 = sVar5;
    iVar3 = FUN_2c47245c(3,uVar6);
    if (iVar3 != 0) {
      FUN_2c674668(iVar3,iVar2 + 0xc4b,uVar6);
      *(int *)(psVar4 + 2) = iVar3;
      *(uint *)(psVar4 + 4) = uVar6;
      psVar4[6] = 0;
      psVar4[7] = 0;
      if (*(int *)(iVar1 + 0x514) == 0) {
        if (*(int *)(iVar1 + 0x510) == 0) {
          *(short **)(iVar1 + 0x514) = psVar4;
          *(short **)(iVar1 + 0x510) = psVar4;
        }
      }
      else {
        *(short **)(*(int *)(iVar1 + 0x514) + 0xc) = psVar4;
        *(short **)(iVar1 + 0x514) = psVar4;
      }
    }
  }
  *(uint *)(iVar1 + 0x50c) = *(int *)(iVar1 + 0x50c) + (uint)*(ushort *)(iVar2 + 0xe4c);
  return 1;
}

