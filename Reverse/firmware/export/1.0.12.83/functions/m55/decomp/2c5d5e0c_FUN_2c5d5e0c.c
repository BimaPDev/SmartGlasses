/* FUN_2c5d5e0c @ 0x2c5d5e0c */

undefined4 FUN_2c5d5e0c(char *param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_2c62c3b0(param_3,param_4);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 0;
    uVar5 = 1;
    cVar3 = *param_1;
    uVar2 = 0;
    if (1 < param_2) {
      do {
        uVar4 = 1;
        uVar6 = uVar5;
        while ((uVar5 = uVar4 + 1, param_1[uVar6] == cVar3 && (uVar4 != 0xff))) {
          uVar4 = uVar5 & 0xff;
          uVar6 = uVar4 + uVar2;
          if (param_2 <= uVar6) {
            if (uVar1 + 2 <= param_4) {
              *(char *)(param_3 + uVar1) = cVar3;
              *(char *)(uVar1 + param_3 + 1) = (char)uVar5;
              *param_5 = uVar1 + 2;
              return 1;
            }
            return 0;
          }
        }
        uVar1 = uVar1 + 2;
        if (param_4 < uVar1) {
          return 0;
        }
        *(char *)(param_3 + -2 + uVar1) = cVar3;
        *(char *)(param_3 + -1 + uVar1) = (char)uVar4;
        if (param_2 <= uVar6) goto LAB_2c5d5e90;
        uVar5 = uVar6 + 1;
        cVar3 = param_1[uVar6];
        uVar2 = uVar6;
      } while (uVar5 < param_2);
    }
    uVar1 = uVar1 + 2;
    if (param_4 < uVar1) {
      return 0;
    }
    *(char *)(param_3 + -2 + uVar1) = cVar3;
    *(undefined1 *)(param_3 + -1 + uVar1) = 1;
  }
LAB_2c5d5e90:
  *param_5 = uVar1;
  return 1;
}

