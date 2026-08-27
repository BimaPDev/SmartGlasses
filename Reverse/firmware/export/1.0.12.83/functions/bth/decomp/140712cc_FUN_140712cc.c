/* FUN_140712cc @ 0x140712cc */

undefined4 FUN_140712cc(uint param_1,uint param_2,uint param_3,int *param_4,undefined1 *param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  uVar6 = 0xff;
  *param_5 = 0xff;
  if (((param_4 == (int *)0x0) || (*param_4 == 0)) || (param_4[1] == 0)) {
    return 0x40;
  }
  if (0x800 < param_3) {
    return 0x31;
  }
  if ((param_1 < 2) && (iVar7 = *(int *)(DAT_140713a8 + (param_1 + 6) * 4), iVar7 != 0)) {
    if (*(byte *)(iVar7 + 0x3c) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(iVar7 + 0x3c);
      uVar5 = 0;
      do {
        piVar9 = piVar9 + 1;
        iVar2 = *piVar9;
        uVar8 = uVar8 + 1;
        if (iVar2 == 0) {
          if (uVar6 == 0xff) {
            uVar6 = uVar5;
          }
        }
        else if ((*(ushort *)(iVar2 + 0x14) == param_2) || (*(ushort *)(iVar2 + 0x16) == param_2))
        goto LAB_14071336;
        uVar5 = uVar8 & 0xff;
      } while (uVar5 < *(byte *)(iVar7 + 0x3c));
      if ((uVar6 != 0xff) &&
         (puVar3 = (undefined4 *)FUN_14073fdc(0x28,0), puVar3 != (undefined4 *)0x0)) {
        *(undefined4 **)(iVar7 + (uVar6 + 0x10) * 4) = puVar3;
        FUN_140739b4(puVar3 + 1);
        uVar4 = DAT_140713ac;
        *puVar3 = param_4;
        *(short *)(puVar3 + 5) = (short)param_2;
        *(short *)((int)puVar3 + 0x16) = (short)param_2;
        uVar1 = (undefined2)param_3;
        *(undefined2 *)(puVar3 + 6) = uVar1;
        *(undefined2 *)((int)puVar3 + 0x1a) = uVar1;
        *(undefined2 *)(puVar3 + 7) = uVar1;
        *(undefined2 *)((int)puVar3 + 0x1e) = uVar1;
        puVar3[4] = uVar4;
        puVar3[8] = 0;
        *(undefined2 *)(puVar3 + 9) = 0;
        puVar3[3] = 0;
        *param_5 = (char)uVar6;
        return 0;
      }
    }
    uVar4 = 0x4b;
  }
  else {
LAB_14071336:
    uVar4 = 0x43;
  }
  return uVar4;
}

